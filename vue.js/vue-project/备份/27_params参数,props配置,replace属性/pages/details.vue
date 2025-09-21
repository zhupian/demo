<template>
    <ul class="news-list">
        <li>编号:{{ id }}</li>
        <li>时间:{{ time }}</li>
        <li>事件:{{ thing }}</li>
    </ul>
</template>

<script setup>
defineProps(['id', 'time', 'thing']);



</script>

<style></style>