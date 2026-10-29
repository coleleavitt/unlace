__int64 __fastcall sub_59740(_QWORD *a1, _DWORD *a2, _DWORD *a3, __int64 *a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  char *v13; // rdi
  char v14; // al
  __int64 v16; // rax
  int v17; // eax
  char *v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = a1[4];
  v8 = a1[5];
  v18[1] = (char *)__readfsqword(0x28u);
  v10 = a1[3];
  LOBYTE(v18[0]) = 0;
  if ( v8 < v7 + 1 )
  {
    v16 = qvector_reserve();
    a1[3] = v16;
    v10 = v16;
    v7 = a1[4];
  }
  *(_BYTE *)(v10 + v7) = 0;
  v11 = a1[3];
  ++a1[4];
  v12 = strtol((const char *)(v11 + 1), v18, 16);
  v13 = v18[0];
  *a2 = v12;
  v14 = *v13;
  if ( *v13 == 44 )
  {
    v17 = strtol(v13 + 1, v18, 16);
    if ( a3 )
      *a3 = v17;
    v13 = v18[0];
    v14 = *v18[0];
  }
  if ( a4 && v14 == 59 )
    sub_595F0((__int64)a1, a4, v13 + 1, a1[3] + a1[4] - 1LL - (_QWORD)(v13 + 1));
  return 1;
}

