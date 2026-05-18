unsigned __int64 __fastcall sub_12EE00(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, double a6)
{
  int v10; // ecx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 *v15; // rsi
  char v16; // al
  unsigned int v17; // r9d
  unsigned int v18; // eax
  unsigned __int8 v20; // al
  int v21; // r13d
  unsigned int v22; // r8d
  unsigned int v24; // [rsp+Ch] [rbp-4Ch]
  char *v25; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v10 = *(unsigned __int8 *)(a2 + 72);
  v26 = __readfsqword(0x28u);
  while ( v10 > ++a3 )
  {
    while ( 1 )
    {
      v11 = a3;
      v12 = 112LL * a3;
      if ( !*(_DWORD *)(a2 + v12 + 924) )
        break;
      v13 = *(_QWORD *)(a2 + v12 + 968);
      if ( *(_WORD *)(v13 + 54) || (a5 & *(_QWORD *)v13) != 0 )
        break;
      v14 = a2 + v12 + 872;
      if ( (*(_BYTE *)(v13 + 49) & 1) != 0 )
      {
        v15 = **(__int64 ***)(v13 + 64);
        v16 = *(_BYTE *)(a1 + 31);
        if ( v16 )
        {
          v20 = v16 - 1;
          *(_BYTE *)(a1 + 31) = v20;
          v17 = *(_DWORD *)(a1 + 4LL * v20 + 216);
        }
        else
        {
          v17 = *(_DWORD *)(a1 + 56) + 1;
          *(_DWORD *)(a1 + 56) = v17;
        }
        v18 = sub_12E1A0(a1, v15, v14, 0, 0, v17, a6);
        sub_E1770(*(_QWORD **)(a1 + 16), 63, *(_DWORD *)(a2 + 112LL * a3 + 924), a4, v18, 1);
      }
      else
      {
        v21 = *(unsigned __int16 *)(v13 + 24);
        v24 = sub_12EA00(a1, a2 + v12 + 872, 0, 0, (__int64 **)&v25, a6);
        sub_E19B0(*(_QWORD *)(a1 + 16), v24, v21, v25);
        v22 = v24;
        if ( v25 )
        {
          sub_C9250(*(_QWORD *)a1, v25);
          v22 = v24;
        }
        sub_E1770(*(_QWORD **)(a1 + 16), 63, *(_DWORD *)(a2 + 112LL * a3 + 924), a4, v22, v21);
      }
      ++a3;
      *(_DWORD *)(a2 + 112 * v11 + 924) = 0;
      v10 = *(unsigned __int8 *)(a2 + 72);
      if ( v10 <= a3 )
        return __readfsqword(0x28u) ^ v26;
    }
  }
  return __readfsqword(0x28u) ^ v26;
}
