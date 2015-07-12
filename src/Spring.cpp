Spring(Dots f, Dots t) {
    from = f;
    to = t;
}

void Spring::update() {
    // 自然長のベクトル計算
    ofVec3f diff = from.vec - to.vec;
    diff.normalize();
    ofVec3f targetLoc = from.vec + diff; // 自然長のベクトル
    
    // 収縮時の力の計算
    ofVec3f springBackForcce = (targetLoc - to.vec) * 0.5;
    springBackForcce *= stiffness;
    springBackForcce *= (1 - dampingVal); // 収縮時の力を減衰させる
    
    // fromとtoのベクトルに加速度としてspringBackForcceを加える
    from.vec += springBackForcce;
    to.vec += springBackForcce * -1;
}
