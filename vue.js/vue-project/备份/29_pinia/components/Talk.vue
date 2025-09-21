<template>
    <div class="box">
        <button @click="gain">获得句子</button>
        <ul>
            <li v-for="item in talkStore.talkList" :key="item.id">{{ item.title }}</li>
        </ul>
    </div>
</template>

<script lang="ts" setup>
import { nanoid } from 'nanoid';
import axios from 'axios';
import { useTalkStore } from '@/store/talk';

const talkStore = useTalkStore();

async function gain() {
    let result = await axios.get('https://v2.jinrishici.com/one.json');

    let obj = { id: nanoid(), title: result.data.data.content };
    console.log(obj);

    talkStore.talkList.unshift(obj);
    talkStore.$subscribe((mutate, state) => {
        console.log("数据发生了变化", mutate, state);

    })
}
</script>

<style scoped>
.box {
    background-color: skyblue;
    padding: 10px;
    border-radius: 10px;
    box-shadow: 0 0 10px;
}

select,
button {
    margin: 0 5px;
    height: 25px;
}
</style>