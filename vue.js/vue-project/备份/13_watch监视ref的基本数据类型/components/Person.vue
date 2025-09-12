<template>
    <div class="person">
        <h1>watch的作用</h1>
        <h2>情况一:监视ref定义的基本数据类型</h2>
        <h2>sum的值为{{ sum }}</h2>
        <button @click="ChSum">sum+1</button>
    </div>
</template>

<script setup lang="ts">
import { ref, watch } from 'vue';
let sum = ref(0);
function ChSum() {
    sum.value += 1;
}
//watch(谁,回调函数)
const StopWatch = watch(sum, (newValue, oldValue) => {
    console.log(sum.value, oldValue, newValue);
    if (newValue >= 10) StopWatch();
})
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