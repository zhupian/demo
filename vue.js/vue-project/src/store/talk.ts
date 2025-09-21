import { defineStore } from "pinia";
export const useTalkStore = defineStore('talk', {
    state() {
        return {
            talkList: [
                { id: 'sdf01', title: "谁家今夜扁舟子，何处相思明月楼？" },
                { id: "sdf02", title: "人生代代无穷已，江月年年只相似。" },
                { id: "sdf03", title: "玉户帘中卷不去，捣衣砧上拂还来。" },
            ]
        }
    }
});