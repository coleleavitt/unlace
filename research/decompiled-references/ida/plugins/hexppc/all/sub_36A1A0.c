__int64 __fastcall sub_36A1A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r13d
  unsigned int v6; // r12d
  __int64 v7; // r14
  bool v9; // r15
  unsigned int v10; // ecx
  int v11; // eax
  char *v12; // rdi
  int v13; // edx
  char *v14; // rsi
  char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  int *v19; // rax
  int *v20; // rcx
  __int64 v21; // rdx
  int v22; // [rsp+10h] [rbp-168h] BYREF
  __int64 v23; // [rsp+18h] [rbp-160h]
  __int64 v24; // [rsp+20h] [rbp-158h]
  __int64 v25; // [rsp+30h] [rbp-148h]
  __int64 v26; // [rsp+38h] [rbp-140h]
  __int64 v27; // [rsp+68h] [rbp-110h]
  __int64 v28; // [rsp+70h] [rbp-108h]
  __int64 v29; // [rsp+80h] [rbp-F8h]
  __int64 v30; // [rsp+88h] [rbp-F0h]
  __int64 v31[6]; // [rsp+A0h] [rbp-D8h] BYREF
  int *v32; // [rsp+D0h] [rbp-A8h]
  __int128 v33; // [rsp+D8h] [rbp-A0h]
  __int64 v34; // [rsp+E8h] [rbp-90h]
  __int128 v35; // [rsp+F0h] [rbp-88h]
  __int64 v36; // [rsp+100h] [rbp-78h]
  __int128 v37; // [rsp+108h] [rbp-70h]
  __int64 v38; // [rsp+118h] [rbp-60h]
  __int64 v39; // [rsp+120h] [rbp-58h]
  __int64 v40; // [rsp+128h] [rbp-50h]
  unsigned __int64 v41; // [rsp+138h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 72);
  if ( v3 - 208 <= 0x2F || (unsigned int)(*(_DWORD *)a2 - 3) > 1 || (*(_WORD *)(a2 + 24) & 0x180) == 0 )
    return 1;
  if ( (get_tinfo_property() & 0x2F) == 0xD && !get_tinfo_property() )
    return 0;
  v7 = get_tinfo_property() & 0xF;
  if ( (_BYTE)v7 == 9 )
  {
    if ( !(unsigned __int8)sub_D0B70(*(_QWORD *)(a1 + 1496), v3, *(_DWORD *)(a2 + 88)) )
      return 0;
    if ( (get_tinfo_property() & 0xF) == 9 )
      return 1;
    v9 = 0;
    if ( get_tinfo_property() )
      return 1;
  }
  else
  {
    v9 = (get_tinfo_property() & 0xF) == 9 || get_tinfo_property();
    if ( v9 == (get_tinfo_property() != 0) )
      return 1;
  }
  v10 = *(_DWORD *)(a1 + 72);
  if ( *(char *)(a2 + 24) >= 0 )
  {
    v6 = sub_368AA0(a2 + 80, v10);
    if ( (_BYTE)v6 )
    {
      sub_CD670((__int64)&v22, *(_QWORD *)(a1 + 1496), v3);
      if ( !v26 )
      {
LABEL_38:
        if ( v29 )
        {
          v30 = 0;
          qfree();
        }
        if ( v27 )
        {
          v28 = 0;
          qfree();
        }
        if ( v25 )
        {
          v26 = 0;
          qfree();
        }
        if ( v23 )
        {
          v24 = 0;
          qfree();
        }
        return v6;
      }
      if ( v22 != 5 || v9 || (_BYTE)v7 != 9 )
        goto LABEL_48;
      memset(v31, 0, sizeof(v31));
      v32 = nullptr;
      v34 = 0;
      v36 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v33 = 0;
      v35 = 0;
      v37 = 0;
      v6 = sub_D4780((__int64)&v22, v31, a1);
      if ( !(_BYTE)v6 )
        goto LABEL_37;
      v11 = sub_1EC8C0((__int64 *)(a1 + 432), a2);
      v12 = *(char **)(a1 + 456);
      v13 = v11;
      v14 = &v12[4 * *(_QWORD *)(a1 + 464)];
      if ( v12 == v14 )
        goto LABEL_58;
      v15 = *(char **)(a1 + 456);
      while ( v13 != *(_DWORD *)v15 )
      {
        v15 += 4;
        if ( v14 == v15 )
          goto LABEL_58;
      }
      v16 = v15 - v12;
      v17 = v16 >> 2;
      if ( v16 == -4 )
      {
LABEL_58:
        if ( !under_debugger )
          sub_37EEE0(52425);
      }
      else
      {
        if ( !(_QWORD)v35 )
        {
LABEL_32:
          v19 = v32;
          v20 = &v32[v33];
          if ( v20 == v32 )
          {
LABEL_47:
            sub_1956A0(v31);
LABEL_48:
            if ( v29 )
            {
              v30 = 0;
              qfree();
            }
            if ( v27 )
            {
              v28 = 0;
              qfree();
            }
            if ( v25 )
            {
              v26 = 0;
              qfree();
            }
            if ( v23 )
            {
              v24 = 0;
              qfree();
            }
            return 0;
          }
          while ( 1 )
          {
            v21 = *v19;
            if ( (_DWORD)v21 != -1 )
              break;
            if ( v20 == ++v19 )
              goto LABEL_47;
          }
          LOBYTE(v6) = v21 < v17;
          goto LABEL_37;
        }
        v18 = *(int *)(v34 + 4 * v35 - 4);
        if ( (_DWORD)v18 != -1 )
        {
          if ( v18 >= v17 )
            goto LABEL_32;
LABEL_37:
          sub_1956A0(v31);
          goto LABEL_38;
        }
        if ( !under_debugger )
          sub_37EEE0(52426);
      }
      BUG();
    }
    return 0;
  }
  return sub_1C2DA0(a1, a3, (_DWORD *)a2, v10);
}

