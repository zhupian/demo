<template>
    <ul class="news-list">
        <li>编号:{{ query.id }}</li>
        <li>时间:{{ query.time }}</li>
        <li>事件:{{ query.thing }}</li>
    </ul>
</template>

<script setup>
import { useRoute } from 'vue-router';
import { toRefs } from 'vue';
let route = useRoute();
//这里传输响应式
let { query } = toRefs(route);
console.log(route.query);


</script>

<style></style>