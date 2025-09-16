<template>
    <div class="person">
        <h2>sum的值为{{ sum }}</h2>
        <button @click="SumAdd">sum+1</button>
    </div>
</template>

<script setup lang="ts">
import { ref } from 'vue';
import { onBeforeMount } from 'vue';
import { onMounted } from 'vue';
import { onBeforeUpdate } from 'vue';
import { onUpdated } from 'vue';
import { onBeforeUnmount } from 'vue';
import { onUnmounted } from 'vue';
let sum = ref(10);
function SumAdd() {
    sum.value += 1;
}

console.log("创建");

onBeforeMount(() => {
    console.log("挂载前");
})

//挂载完毕
onMounted(() => {
    console.log("子-----挂载完毕");
})

//更新前
onBeforeUpdate(() => {
    console.log("更新前");
})

//更新完毕
onUpdated(() => {
    console.log("更新完毕");
})

//卸载前
onBeforeUnmount(() => {
    console.log("卸载前");
})

//卸载完毕
onUnmounted(() => {
    console.log("卸载完毕");
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