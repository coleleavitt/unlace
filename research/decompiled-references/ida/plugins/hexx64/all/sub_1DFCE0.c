__int64 __fastcall sub_1DFCE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 *v15; // rdi
  char v16; // al
  __int64 v17; // rdx
  _QWORD *v18; // r15
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  unsigned int v25; // [rsp+Ch] [rbp-7Ch]
  __int64 v26; // [rsp+10h] [rbp-78h] BYREF
  __int128 v27; // [rsp+18h] [rbp-70h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  char v29; // [rsp+30h] [rbp-58h]
  unsigned __int64 v30; // [rsp+38h] [rbp-50h]
  char v31; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v25 = sub_1DF920((_QWORD *)a1, a2, a3, a4, nullptr, a5, a6);
  if ( v25 == 1 )
  {
    if ( (*(_BYTE *)a4 & 0xFB) != 1 )
      return (unsigned int)-1;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( !v12 )
      return (unsigned int)-1;
    v13 = sub_110340(v12, 0, v8, v9, v10, v11, a5, a6);
    v14 = v13;
    if ( !v13 )
      return (unsigned int)-1;
    ++*(_DWORD *)(v13 + 24);
    v15 = (unsigned __int64 *)(*(_QWORD *)v13 + 24LL * *(int *)(a1 + 72));
    v16 = *(_BYTE *)a4;
    if ( *(_BYTE *)a4 == 1 )
    {
      v17 = *(int *)(a4 + 8);
    }
    else if ( v16 == 5 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL);
    }
    else
    {
      v16 = 0;
      v17 = -1;
    }
    v29 = v16;
    v26 = 0;
    v28 = v17;
    v30 = 0xFFFFFFFF00000001LL;
    v31 = 1;
    v27 = 0;
    v18 = sub_104DF0(v15, (__int64)&v26);
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
    if ( v18 )
    {
      v19 = 0;
      v20 = 0;
      if ( !v18[1] )
        goto LABEL_19;
      while ( 1 )
      {
        v23 = *(unsigned int *)(*v18 + 4 * v20);
        if ( !(_DWORD)v23 )
          goto LABEL_18;
        v21 = *(_QWORD *)(a1 + 64);
        if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 64) )
        {
          if ( !under_debugger )
            sub_383060(0xCDEFu, 0.0);
LABEL_30:
          BUG();
        }
        v22 = sub_1DF920(*(_QWORD **)(*(_QWORD *)(v21 + 528) + 8 * v23), a2, 0, a4, nullptr, 0.0, a6);
        if ( v22 == -1 )
          goto LABEL_18;
        if ( v22 == 1 )
          break;
        v20 = ++v19;
        if ( (unsigned __int64)v19 >= v18[1] )
        {
          v25 = 0;
          goto LABEL_19;
        }
      }
      if ( *((_DWORD *)v18 + 10) <= *(_DWORD *)(a4 + 4) )
      {
        if ( !under_debugger )
          sub_383060(0xC5EDu, 0.0);
        goto LABEL_30;
      }
    }
LABEL_18:
    v25 = -1;
LABEL_19:
    sub_104E10(v14, 0.0);
  }
  return v25;
}

