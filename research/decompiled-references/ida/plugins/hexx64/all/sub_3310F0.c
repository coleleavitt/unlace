__int64 __fastcall sub_3310F0(__int64 a1, _DWORD *a2, double a3)
{
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // rbp
  void *v6; // rax
  char v8[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( (unsigned int)(1 - *a2) > 0x24 )
    sub_328920(a3);
  qsnprintf();
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = strlen(v8);
  v4 = v3 + 1;
  v5 = v3;
  v6 = (void *)qvector_reserve(a1, 0, v3 + 1, 1);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v4;
  memmove(v6, v8, v5);
  *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
  return a1;
}

