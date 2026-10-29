__int64 __fastcall sub_10D2F0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  unsigned int v7; // ecx
  unsigned int v8; // r14d
  signed __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rbp
  unsigned int v13; // r15d
  char v14; // r13
  __int64 v15; // rsi
  size_t v16; // rdi
  _DWORD *v17; // rcx
  signed __int64 v19; // [rsp+0h] [rbp-88h]
  int v20; // [rsp+1Ch] [rbp-6Ch]
  int v22; // [rsp+30h] [rbp-58h]
  char v23; // [rsp+37h] [rbp-51h]
  __int64 v25[9]; // [rsp+40h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v6 = *v5;
  v7 = *((_DWORD *)v5 + 13);
  v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 52LL);
  v22 = v7;
  if ( v20 == v7 || (v8 = 8, (*(_QWORD *)(v6 + 16) & 0xFF000000FFLL) == 0) )
  {
    v9 = v20 * (unsigned __int64)a3;
    v19 = v9;
    v10 = v9 - v20;
    if ( v9 <= v10 )
    {
      return 0;
    }
    else
    {
      v11 = (int)v7;
      v23 = (a5 ^ 1) & 1;
      while ( 1 )
      {
        v13 = 0;
        v25[0] = 0;
        v14 = 1;
        v15 = (unsigned int)(v10 / v11) + 1;
        if ( (_DWORD)v15 != dword_241470 / v7 + 1 )
        {
          v14 = 0;
          v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(v6 + 272))(v6, v15, v25, 0);
          if ( !v13 )
          {
            v13 = sub_10D290(v25[0], v15);
            if ( !v13 )
            {
              v16 = v22;
              if ( v20 <= v22 )
                v16 = v20;
              v17 = memcpy((void *)(*(_QWORD *)(v25[0] + 8) + v10 % v11), (const void *)(a4 + v10 % v20), v16);
              v14 = v23 & (v10 == 0);
              **(_BYTE **)(v25[0] + 16) = 0;
              if ( v14 )
                v17[7] = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 64LL));
              else
                v14 = 1;
            }
          }
          if ( v25[0] )
            sub_C36A0(v25[0]);
        }
        v10 += v11;
        if ( v19 <= v10 || !v14 )
          break;
        v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 52LL);
      }
      return v13;
    }
  }
  return v8;
}
