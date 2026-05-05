# algorithm-study
프로그래머스 + 코딩테스트 풀이 기록

완벽합니다! 앞으로 터미널을 열고 기계처럼 타이핑하실 수 있게, **필수 명령어 순서**와 **상황별 추천 커밋 메시지 템플릿**을 깔끔하게 정리해 드릴게요.

### 💻 무조건 외워두면 되는 깃허브 업로드 콤보
`Algorithm\algorithm-study` 폴더에서 `cmd`를 열고 아래 순서대로 입력하세요.

```bash
# 1. (선택) 내가 뭘 수정하고 지웠는지 마지막으로 눈으로 확인
git status

# 2. 모든 변경사항(추가, 수정, 삭제) 장바구니에 싹 다 담기
git add .

# 3. 이름표(커밋 메시지) 붙이기
git commit -m "여기에 아래 추천 메시지 중 하나를 골라 작성"

# 4. 깃허브 서버로 최종 업로드
git push origin main
```
*(※ 보통 `git push`만 쳐도 되지만, 가끔 꼬일 때를 대비해 `git push origin main`으로 치는 습관을 들이는 것도 좋습니다.)*

---

### 📝 상황별 추천 커밋 메시지 (그대로 복사해서 쓰세요!)

개발자들이 가장 많이 쓰는 직관적인 말머리(Prefix) 규칙을 적용한 템플릿입니다.

**1. 문제를 완벽하게 다 풀었을 때 (Solve)**
*   `git commit -m "Solve: [AtCoder] ABC 456 A번 해결"`
*   `git commit -m "Solve: 백준 1260번 BFS 탐색 C++ 구현"`
*   `git commit -m "Solve: 프로그래머스 타겟넘버 (C++)"`

**2. 풀다가 막혔거나, 내일 이어서 풀고 싶을 때 (WIP - Work In Progress)**
*   `git commit -m "WIP: [AtCoder] ABC 456 C번 진행 중 (시간초과 TLE 해결 필요)"`
*   `git commit -m "WIP: 퀵 정렬(Quick Sort) 로직 뼈대 작성 완료"`

**3. 기존 코드를 더 깔끔하게 다듬거나 속도를 개선했을 때 (Refactor)**
*   `git commit -m "Refactor: BFS 탐색 중복 방문 로직 최적화"`
*   `git commit -m "Refactor: 불필요한 조건문 제거 및 가독성 개선"`

**4. 폴더 구조를 바꾸거나 파일을 지웠을 때 (Remove / Chore)**
*   `git commit -m "Remove: 오타로 잘못 생성된 C++ 테스트 파일 삭제"`
*   `git commit -m "Chore: 폴더 구조 재배치 및 README.md 업데이트"`

**💡 핵심 꿀팁 하나 더!**
터미널에서 키보드의 **위, 아래 방향키(↑, ↓)**를 누르시면 이전에 쳤던 명령어 기록이 그대로 다시 나옵니다. 매번 `git commit...`을 처음부터 치지 마시고, 방향키로 이전 커밋 명령어를 불러온 뒤 따옴표 안의 글씨만 쓱쓱 지우고 수정하시면 타자 치는 시간을 확 줄일 수 있습니다!