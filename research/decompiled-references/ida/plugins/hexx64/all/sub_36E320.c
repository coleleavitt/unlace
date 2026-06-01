__int64 __fastcall sub_36E320(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  unsigned int v5; // r13d
  unsigned int v8; // r12d
  char v9; // r14
  bool v11; // r15
  unsigned int v12; // ecx
  int v13; // eax
  char *v14; // rdi
  int v15; // edx
  char *v16; // rsi
  char *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  int *v21; // rax
  int *v22; // rcx
  __int64 v23; // rdx
  int v24; // [rsp+10h] [rbp-168h] BYREF
  __int64 v25; // [rsp+18h] [rbp-160h]
  __int64 v26; // [rsp+20h] [rbp-158h]
  __int64 v27; // [rsp+30h] [rbp-148h]
  __int64 v28; // [rsp+38h] [rbp-140h]
  __int64 v29; // [rsp+68h] [rbp-110h]
  __int64 v30; // [rsp+70h] [rbp-108h]
  __int64 v31; // [rsp+80h] [rbp-F8h]
  __int64 v32; // [rsp+88h] [rbp-F0h]
  __int64 v33[6]; // [rsp+A0h] [rbp-D8h] BYREF
  int *v34; // [rsp+D0h] [rbp-A8h]
  __int128 v35; // [rsp+D8h] [rbp-A0h]
  __int64 v36; // [rsp+E8h] [rbp-90h]
  __int128 v37; // [rsp+F0h] [rbp-88h]
  __int64 v38; // [rsp+100h] [rbp-78h]
  __int128 v39; // [rsp+108h] [rbp-70h]
  __int64 v40; // [rsp+118h] [rbp-60h]
  __int64 v41; // [rsp+120h] [rbp-58h]
  __int64 v42; // [rsp+128h] [rbp-50h]
  unsigned __int64 v43; // [rsp+138h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 72);
  if ( v5 - 208 <= 0x2F || (unsigned int)(*(_DWORD *)a2 - 3) > 1 || (*(_WORD *)(a2 + 24) & 0x180) == 0 )
    return 1;
  if ( (get_tinfo_property() & 0x2F) == 0xD && !get_tinfo_property() )
    return 0;
  v9 = get_tinfo_property() & 0xF;
  if ( v9 == 9 )
  {
    if ( !(unsigned __int8)sub_D45B0(*(_QWORD *)(a1 + 1496), v5, *(_DWORD *)(a2 + 88)) )
      return 0;
    if ( (get_tinfo_property() & 0xF) == 9 )
      return 1;
    v11 = 0;
    if ( get_tinfo_property() )
      return 1;
  }
  else
  {
    v11 = (get_tinfo_property() & 0xF) == 9 || get_tinfo_property();
    if ( v11 == (get_tinfo_property() != 0) )
      return 1;
  }
  v12 = *(_DWORD *)(a1 + 72);
  if ( *(char *)(a2 + 24) >= 0 )
  {
    v8 = sub_36CC20(a2 + 80, v12);
    if ( (_BYTE)v8 )
    {
      sub_D10B0((__int64)&v24, *(_QWORD *)(a1 + 1496), v5);
      if ( !v28 )
      {
LABEL_38:
        if ( v31 )
        {
          v32 = 0;
          qfree(v31);
        }
        if ( v29 )
        {
          v30 = 0;
          qfree(v29);
        }
        if ( v27 )
        {
          v28 = 0;
          qfree(v27);
        }
        if ( v25 )
        {
          v26 = 0;
          qfree(v25);
        }
        return v8;
      }
      if ( v24 != 5 || v11 || v9 != 9 )
        goto LABEL_48;
      memset(v33, 0, sizeof(v33));
      v34 = nullptr;
      v36 = 0;
      v38 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v35 = 0;
      v37 = 0;
      v39 = 0;
      v8 = sub_D81C0((__int64)&v24, v33, a1, (__m128)0LL, a5);
      if ( !(_BYTE)v8 )
        goto LABEL_37;
      v13 = sub_1F0540((__int64 *)(a1 + 432), a2, 0.0);
      v14 = *(char **)(a1 + 456);
      v15 = v13;
      v16 = &v14[4 * *(_QWORD *)(a1 + 464)];
      if ( v14 == v16 )
        goto LABEL_58;
      v17 = *(char **)(a1 + 456);
      while ( v15 != *(_DWORD *)v17 )
      {
        v17 += 4;
        if ( v16 == v17 )
          goto LABEL_58;
      }
      v18 = v17 - v14;
      v19 = v18 >> 2;
      if ( v18 == -4 )
      {
LABEL_58:
        if ( !under_debugger )
          sub_383060(0xCCC9u, 0.0);
      }
      else
      {
        if ( !(_QWORD)v37 )
        {
LABEL_32:
          v21 = v34;
          v22 = &v34[v35];
          if ( v22 == v34 )
          {
LABEL_47:
            sub_1990E0(v33);
LABEL_48:
            if ( v31 )
            {
              v32 = 0;
              qfree(v31);
            }
            if ( v29 )
            {
              v30 = 0;
              qfree(v29);
            }
            if ( v27 )
            {
              v28 = 0;
              qfree(v27);
            }
            if ( v25 )
            {
              v26 = 0;
              qfree(v25);
            }
            return 0;
          }
          while ( 1 )
          {
            v23 = *v21;
            if ( (_DWORD)v23 != -1 )
              break;
            if ( v22 == ++v21 )
              goto LABEL_47;
          }
          LOBYTE(v8) = v23 < v19;
          goto LABEL_37;
        }
        v20 = *(int *)(v36 + 4 * v37 - 4);
        if ( (_DWORD)v20 != -1 )
        {
          if ( v20 >= v19 )
            goto LABEL_32;
LABEL_37:
          sub_1990E0(v33);
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_383060(0xCCCAu, 0.0);
      }
      BUG();
    }
    return 0;
  }
  return sub_1C67E0(a1, a3, (_DWORD *)a2, v12, a4);
}

