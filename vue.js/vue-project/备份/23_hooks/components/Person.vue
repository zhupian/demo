<template>
    <div class="person">
        <h2>当写的数据过多 data,function全都混到一起,和vue2简直没有区别</h2>
        <h2>hook就是解决这个问题的</h2>
        <h2>sum的值为{{ sum }}</h2>
        <button @click="SumAdd">sum+1</button>
        <hr>
        </hr>
        <img v-for="(dog, index) in dogList" :src="dog" :key="index">
        <button @click="Again">再来一只小狗</button>
    </div>
</template>

<script setup lang="ts">
import useDog from '@/hooks/useDog';
import useSum from '@/hooks/useSum';
//高内聚
const { sum, SumAdd } = useSum();
const { dogList, Again } = useDog();
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

img {
    width: 100px;
}
</style>