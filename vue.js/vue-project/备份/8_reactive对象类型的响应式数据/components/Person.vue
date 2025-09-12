<template>
    <div class="car">
        <h2>一辆{{ car.brand }}价值{{ car.price }}</h2>
        <button @click="ChPrice">改价格</button>
        <h2>c是{{ obj.a.b.c }}</h2>
        <button @click="ChObj">改变C</button>
    </div>
</template>

<script setup lang="ts">
import { reactive } from 'vue';
let car = reactive({ brand: "奔驰", price: 100 });
let obj = reactive({
    a: {
        b: {
            c: 666
        }
    }
})
function ChObj() {
    obj.a.b.c = 999
}
function ChPrice() {
    car.price += 10;
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