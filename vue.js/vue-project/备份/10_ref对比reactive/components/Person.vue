<template>
    <div class="car">
        <h2>一辆{{ car.brand }}价值{{ car.price }}</h2>
        <button @click="ChPrice">改价格</button>
        <button @click="ChCar">改汽车</button>
        <h2>当前和为{{ sum }}</h2>
        <button @click="Sum">点我sum+1</button>
    </div>
</template>

<script setup lang="ts">
import { ref } from 'vue';
import { reactive } from 'vue';
let car = reactive({ brand: "奔驰", price: 100 });
let sum = ref(0);
function Sum() {
    sum.value += 1;
}
function ChPrice() {
    car.price += 10;
}
function ChCar() {
    //car = { brand: "宝马", price: 200 };//这里会给reactive重新分配一个对象
    //导致car变为普通的对象,失去响应式身份
    Object.assign(car, { brand: "宝马", price: 200 });
    //Object.assign 整体替换 浅拷贝

    //或者如果car是用ref定义的可以直接car.value={brand:"",price:};
}
</script>
<style>
.car {
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