__int64 __fastcall sub_8C210(__int64 a1, __int64 *a2, _DWORD *a3, const char *a4, int a5, int a6)
{
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r14d
  __int64 v15; // rax
  __m128i v16; // xmm0
  size_t n; // [rsp+0h] [rbp-90h]
  __int64 (__fastcall **v20)(); // [rsp+18h] [rbp-78h] BYREF
  char v21; // [rsp+20h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-68h] BYREF
  __int128 v23; // [rsp+30h] [rbp-60h]
  int v24; // [rsp+40h] [rbp-50h]
  int v25; // [rsp+44h] [rbp-4Ch]
  char v26; // [rsp+48h] [rbp-48h]
  unsigned __int64 v27; // [rsp+50h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v21 = 58;
  v23 = 0;
  ptr = nullptr;
  v9 = (a2 != nullptr) | (2 * (a3 != nullptr));
  v20 = &off_238608;
  if ( a4 )
  {
    n = strlen(a4);
    ptr = (void *)sub_1987B0(&ptr, 0, n + 1, 1);
    *(_QWORD *)&v23 = n + 1;
    memmove(ptr, a4, n);
    *((_BYTE *)ptr + n) = 0;
  }
  v10 = *(_QWORD *)(a1 + 40);
  v24 = a5;
  v25 = a6;
  v26 = v9;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(v10 + 80))(a1 + 40, &v20);
  v14 = sub_8ACB0((_QWORD *)(a1 + 40), v11, 59, nullptr, v12, v13);
  if ( !v14 )
  {
    if ( a2 )
    {
      v15 = *a2;
      v16 = _mm_loadu_si128((const __m128i *)(a2 + 1));
      *a2 = *(_QWORD *)(v11 + 16);
      a2[1] = *(_QWORD *)(v11 + 24);
      a2[2] = *(_QWORD *)(v11 + 32);
      *(_QWORD *)(v11 + 16) = v15;
      *(__m128i *)(v11 + 24) = v16;
    }
    if ( a3 )
      *a3 = *(_DWORD *)(v11 + 40);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  sub_9C620(&v20);
  return v14;
}
