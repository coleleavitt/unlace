unsigned __int64 __fastcall sub_F09F0(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  __int64 *v7; // rbp
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  int v13; // edx
  int v14; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  int v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v7 = **(__int64 ***)a1;
  v8 = *v7;
  v14 = 0;
  if ( (unsigned int)sub_CE930(a3, &v14) && v14 >= 0 )
  {
    v15 = 0;
    v16 = 0;
    v9 = sub_DEC00(v8, 155, (__int64)&v15, 0);
    if ( !v9 )
      return __readfsqword(0x28u) ^ v17;
    v13 = v14;
    *((_DWORD *)v9 + 1) |= 0x400u;
    *((_DWORD *)v9 + 2) = v13;
  }
  else
  {
    v15 = 0;
    v16 = 0;
    v9 = sub_DEC00(v8, 176, (__int64)&v15, 0);
    if ( !v9 )
      return __readfsqword(0x28u) ^ v17;
    *((_DWORD *)v9 + 11) = a2;
  }
  v10 = sub_F04A0(v7, 46, 0, (__int64)v9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 32) + 56LL * (int)sub_DF750(a1, (__int64)v10, 3);
    *(_DWORD *)(v11 + 28) = a4;
    *(_WORD *)(v11 + 20) = 64;
    *(_BYTE *)(v11 + 23) = a5;
  }
  return __readfsqword(0x28u) ^ v17;
}
