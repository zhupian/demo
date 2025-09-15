<template>
    <div class="person">
        <h2>{{ a }},{{ b }},{{ c }},{{ d }}</h2>
        <ul>
            <li v-for="x in list" :key="x.id">
                {{ x.name }},{{ x.age }},{{ x.id }}
            </li>
        </ul>
    </div>
</template>

<script setup lang="ts">
import { type PersonInter } from '@/types';
// defineProps(['a','b']) 只接收
import { type Persons } from '@/types';
//接收并且限制类型 
defineProps<{ list: Persons }>()
//要求收到的是list并且符合接口Persons

//接受并且限制类型并且限制必要性
defineProps<{ list?: Persons }>()
//可传可不传
let x = defineProps(['a', 'b', 'c', 'd', 'list']);//a,b进来必须"声明"
console.log(x);


</script>

<style>
.person {
    border: 2px solid #333;
    background-color: aqua;
    padding: 20px;
    margin: 20px;
    border-radius: 8px;
}

button {
    margin: 0 10px;
}
</style>