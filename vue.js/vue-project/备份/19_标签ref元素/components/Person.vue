<template>
    <div class="person">
        <h1>A</h1>
        <h2 ref="title2">B</h2>
        <h3>C</h3>
        <button @click="show">点我输出h2这个元素</button>
    </div>
</template>

<script setup lang="ts">
import { ref } from 'vue';
//创建一个title2用于存储ref标记的内容
let title2 = ref();
function show() {
    console.log(title2.value);

}
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