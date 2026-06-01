__int64 __fastcall sub_1271B0(char *a1, unsigned __int8 *a2)
{
  char v2; // al
  char v3; // dl
  unsigned int v4; // ebp
  char v5; // al
  __int16 v6; // ax
  int v7; // eax
  __int64 v8; // rax
  int v10; // eax
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  _DWORD *v13; // rbx
  _DWORD *v14; // rbx
  __int64 v15; // rax
  _DWORD *v16; // rbx
  __int64 i; // rbx
  __int64 v18; // rax
  bool v19; // zf
  unsigned __int64 v20; // [rsp+10h] [rbp-98h] BYREF
  __int64 v21; // [rsp+18h] [rbp-90h]
  _QWORD v22[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-78h] BYREF
  int v24; // [rsp+40h] [rbp-68h]
  int v25; // [rsp+50h] [rbp-58h]
  int v26; // [rsp+60h] [rbp-48h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v20 = 0xFFFFFFFF00000000LL;
  v21 = 0;
  sub_1220E0((__int64)&v20, a2);
  v2 = *a1;
  v3 = v20;
  if ( *a1 != 15 || (_BYTE)v20 == 15 )
    goto LABEL_3;
  v22[0] = 0;
  v22[1] = 0;
  v4 = sub_1C0C70(&v20, v22);
  if ( (_BYTE)v4 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
    if ( *(_QWORD *)(v11 + 8) != 1 )
    {
      v23[1] = 0;
      v24 = 0xFFFF;
      v12 = *(_QWORD *)(v11 + 8);
      v23[0] = 0;
      if ( v12 > 1 )
      {
        for ( i = 1; i != v12; ++i )
          cleanup_argloc();
        *(_QWORD *)(v11 + 8) = 1;
      }
      else if ( !v12 )
      {
        v14 = *(_DWORD **)v11;
        v15 = *(_QWORD *)(v11 + 16);
        if ( (unsigned __int64)v23 < *(_QWORD *)v11 || v23 >= (_QWORD *)&v14[6 * v15] )
        {
          if ( v15
            || (v18 = qvector_reserve(), v19 = *(_QWORD *)(v11 + 8) == 0, *(_QWORD *)v11 = v18, v14 = (_DWORD *)v18, v19) )
          {
            *v14 = 0;
            copy_argloc();
            v14[4] = v24;
          }
          *(_QWORD *)(v11 + 8) = 1;
        }
        else
        {
          v25 = 0;
          copy_argloc();
          v26 = v24;
          if ( !*(_QWORD *)(v11 + 16) )
            *(_QWORD *)v11 = qvector_reserve();
          if ( !*(_QWORD *)(v11 + 8) )
          {
            v16 = *(_DWORD **)v11;
            **(_DWORD **)v11 = 0;
            copy_argloc();
            v16[4] = v26;
          }
          *(_QWORD *)(v11 + 8) = 1;
          cleanup_argloc();
        }
      }
      cleanup_argloc();
    }
    v13 = *(_DWORD **)v11;
    copy_argloc();
    *((_WORD *)v13 + 8) = 0;
    *((_WORD *)v13 + 9) = WORD2(v20);
    goto LABEL_8;
  }
  v10 = HIDWORD(v20);
  if ( HIDWORD(v20) != *((_DWORD *)a1 + 1)
    && (v10 != get_tinfo_property()
     || !(unsigned __int8)sub_126950(
                            (unsigned __int64)&v20,
                            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 1504LL),
                            *((_DWORD *)a1 + 1),
                            0)) )
  {
LABEL_8:
    cleanup_argloc();
    goto LABEL_4;
  }
  cleanup_argloc();
  v2 = *a1;
  v3 = v20;
LABEL_3:
  *a1 = v3;
  v4 = 1;
  LOBYTE(v20) = v2;
  v5 = a1[1];
  a1[1] = BYTE1(v20);
  BYTE1(v20) = v5;
  v6 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = WORD1(v20);
  WORD1(v20) = v6;
  v7 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = HIDWORD(v20);
  HIDWORD(v20) = v7;
  v8 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v21;
  v21 = v8;
LABEL_4:
  sub_118BA0((__int64)&v20);
  return v4;
}

