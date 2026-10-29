__int64 __fastcall sub_12B3B0(char *a1, unsigned __int8 *a2, __m128i a3)
{
  char v3; // al
  char v4; // dl
  unsigned int v5; // ebp
  char v6; // al
  __int16 v7; // ax
  int v8; // eax
  __int64 v9; // rax
  int v11; // eax
  __int64 *v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  _DWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 i; // rbx
  __int64 v19; // rax
  bool v20; // zf
  unsigned int *v21; // [rsp+10h] [rbp-98h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h]
  _QWORD v23[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+40h] [rbp-68h]
  int v26; // [rsp+50h] [rbp-58h]
  int v27; // [rsp+60h] [rbp-48h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v21 = (unsigned int *)0xFFFFFFFF00000000LL;
  v22 = 0;
  sub_1262E0((__int64)&v21, a2, *(double *)a3.m128i_i64);
  v3 = *a1;
  v4 = (char)v21;
  if ( *a1 != 15 || (_BYTE)v21 == 15 )
    goto LABEL_3;
  v23[0] = 0;
  v23[1] = 0;
  v5 = sub_1C5030((char *)&v21, (__int64)v23);
  if ( (_BYTE)v5 )
  {
    v12 = *(__int64 **)(*((_QWORD *)a1 + 1) + 8LL);
    if ( v12[1] != 1 )
    {
      v24[1] = 0;
      v25 = 0xFFFF;
      v13 = v12[1];
      v24[0] = 0;
      if ( v13 > 1 )
      {
        for ( i = 1; i != v13; ++i )
          cleanup_argloc();
        v12[1] = 1;
      }
      else if ( !v13 )
      {
        v15 = (_DWORD *)*v12;
        v16 = v12[2];
        if ( (unsigned __int64)v24 < *v12 || v24 >= (_QWORD *)&v15[6 * v16] )
        {
          if ( v16
            || (v19 = qvector_reserve((__int64)v12, *v12, 1, 24), v20 = v12[1] == 0,
                                                                  *v12 = v19,
                                                                  v15 = (_DWORD *)v19,
                                                                  v20) )
          {
            *v15 = 0;
            copy_argloc();
            v15[4] = v25;
          }
          v12[1] = 1;
        }
        else
        {
          v26 = 0;
          copy_argloc();
          v27 = v25;
          if ( !v12[2] )
            *v12 = qvector_reserve((__int64)v12, *v12, 1, 24);
          if ( !v12[1] )
          {
            v17 = *v12;
            *(_DWORD *)*v12 = 0;
            copy_argloc();
            *(_DWORD *)(v17 + 16) = v27;
          }
          v12[1] = 1;
          cleanup_argloc();
        }
      }
      cleanup_argloc();
    }
    v14 = *v12;
    copy_argloc();
    *(_WORD *)(v14 + 16) = 0;
    *(_WORD *)(v14 + 18) = WORD2(v21);
    goto LABEL_8;
  }
  v11 = HIDWORD(v21);
  if ( HIDWORD(v21) != *((_DWORD *)a1 + 1)
    && (v11 != get_tinfo_property()
     || !(unsigned __int8)sub_12AB50(
                            &v21,
                            *(unsigned __int64 **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 1504LL),
                            *((_DWORD *)a1 + 1),
                            0,
                            a3)) )
  {
LABEL_8:
    cleanup_argloc();
    goto LABEL_4;
  }
  cleanup_argloc();
  v3 = *a1;
  v4 = (char)v21;
LABEL_3:
  *a1 = v4;
  v5 = 1;
  LOBYTE(v21) = v3;
  v6 = a1[1];
  a1[1] = BYTE1(v21);
  BYTE1(v21) = v6;
  v7 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = WORD1(v21);
  WORD1(v21) = v7;
  v8 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = HIDWORD(v21);
  HIDWORD(v21) = v8;
  v9 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v22;
  v22 = v9;
LABEL_4:
  sub_11CDA0((__int64)&v21);
  return v5;
}

