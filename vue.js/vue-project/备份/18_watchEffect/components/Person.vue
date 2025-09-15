<template>
    <div class="person">
        <h2>需求:当A到达10或者B到达20向服务器发送请求</h2>
        <h2>A的值是{{ A }}</h2>
        <h2>B的值是{{ B }}</h2>
        <button @click="addA">A增加2</button>
        <button @click="addB">B增加4</button>
    </div>
</template>

<script setup lang="ts">
import { ref, watch, watchEffect } from 'vue';
let A = ref(0), B = ref(0);
function addA() {
    A.value += 2
}
function addB() {
    B.value += 4;
}
//watch是手动挡
// const stopWatch = watch([A, B], (newVaule, oldVaule) => {
//     console.log([A.value, B.value]);
//     if (A.value >= 10 || B.value >= 20) stopWatch();
// })
// watchEffect是自动挡
const StopwatchEffect = watchEffect(() => {
    if (A.value >= 10 || B.value >= 20) console.log("给服务器发送请求");

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