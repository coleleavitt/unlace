__int64 __fastcall sub_1DF020(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  signed int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 func; // rax
  unsigned int v13; // eax
  unsigned int v15; // [rsp+Ch] [rbp-6Ch]
  unsigned int v16; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 *v17; // [rsp+10h] [rbp-68h] BYREF
  __int64 v18; // [rsp+18h] [rbp-60h]
  __int128 v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 1496);
  v20 = __readfsqword(0x28u);
  v15 = sub_33E140(v6, 0x13u, a2, a3);
  if ( v15 )
    return v15;
  v7 = 8;
  v8 = 1;
  if ( *(int *)(a1 + 64) <= 1 )
    return v15;
  while ( 1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v7) + 56LL);
    if ( !v10
      || (unsigned int)(*(_DWORD *)v10 - 55) > 1
      || *(_BYTE *)(v10 + 32) != 6
      || (v11 = *(_QWORD *)(v10 + 40), (func = get_func()) == 0)
      || *(_QWORD *)func != v11
      || (*(_BYTE *)(func + 18) & 2) == 0 )
    {
LABEL_4:
      v9 = *(_DWORD *)(a1 + 64);
      if ( v9 <= ++v8 )
        return v15;
      goto LABEL_5;
    }
    a4 = 0.0;
    v17 = (unsigned __int64 *)func;
    v18 = 0;
    v19 = 0;
    v13 = sub_1DB100(a1, a2, v8, &v17, a3, 0, 0.0);
    if ( v13 )
      break;
    if ( !v18 )
      goto LABEL_4;
    *(_QWORD *)&v19 = 0;
    ++v8;
    qfree(v18);
    v9 = *(_DWORD *)(a1 + 64);
    if ( v9 <= v8 )
      return v15;
LABEL_5:
    v7 += 8;
    if ( v8 >= (unsigned int)v9 )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, a4);
      BUG();
    }
  }
  if ( v18 )
  {
    v16 = v13;
    *(_QWORD *)&v19 = 0;
    qfree(v18);
    return v16;
  }
  return v13;
}

