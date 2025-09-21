<template>
    <div class="count">
        <h2>当前求和为:{{ sum }},放大十倍:{{ bigSum }}</h2>
        <select v-model.number="n">
            <option value="1">1</option>
            <option value="2">2</option>
            <option value="3">3</option>
        </select>
        <button @click="increment">加</button>
        <button @click="decrement">减</button>
    </div>
</template>

<script setup>
import { ref } from 'vue'
import { useCountStore } from '@/store/count';
import { storeToRefs } from 'pinia';

const countStore = useCountStore();
//这里也可以用ref,但是storeToRefs只会对store中的数据包裹
const { sum, bigSum } = storeToRefs(countStore);
console.log(sum);

let n = ref(1) //n是当前用户选择的数字
function increment() {
    sum.value += n.value
}

function decrement() {
    sum.value -= n.value;
}
</script>

<style scoped>
.count {
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