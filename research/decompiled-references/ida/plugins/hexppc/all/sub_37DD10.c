__int64 __fastcall sub_37DD10(__int64 a1, unsigned __int64 a2, _BYTE *a3, unsigned int a4, char a5)
{
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbp
  _QWORD **v12; // rbx
  void *v13; // rdi
  unsigned __int64 v15; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 *v16; // [rsp+8h] [rbp-90h] BYREF
  _BYTE v17[8]; // [rsp+10h] [rbp-88h] BYREF
  int v18; // [rsp+18h] [rbp-80h] BYREF
  void *v19; // [rsp+20h] [rbp-78h]
  int *v20; // [rsp+28h] [rbp-70h]
  int *v21; // [rsp+30h] [rbp-68h]
  __int128 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    if ( (*a3 & 0xF) == 0xD && (*(_QWORD *)a3 & 0x100) == 0 )
    {
      if ( !under_debugger )
        sub_37EEE0(50227);
      goto LABEL_16;
    }
    if ( (unsigned int)verify_tinfo() )
    {
      if ( !under_debugger )
        sub_37EEE0(50226);
LABEL_16:
      BUG();
    }
    v9 = *(_QWORD *)(a1 + 1128);
    if ( a5 )
    {
      v18 = 0;
      v19 = nullptr;
      v20 = &v18;
      v21 = &v18;
      v22 = 0;
      copy_tinfo_t();
      v15 = a2;
      v23 = a4;
      v16 = &v15;
      v10 = sub_37ABD0((__m128i *)(v9 + 8), &v15, (__int64 **)&v16);
      v11 = v10 + 24;
      sub_3682C0((_QWORD *)(v10 + 32), (__int64)v17);
      copy_tinfo_t();
      *(_QWORD *)(v11 + 64) = v23;
      clear_tinfo_t();
      v12 = (_QWORD **)v19;
      if ( v19 )
      {
        do
        {
          sub_367A50(v12[3]);
          v13 = v12;
          v12 = (_QWORD **)v12[2];
          operator delete(v13, 0x28u);
        }
        while ( v12 );
      }
      goto LABEL_9;
    }
    if ( (unsigned __int8)sub_37AD40(*(_QWORD *)(a1 + 1128), a2, a3, a4) )
    {
LABEL_9:
      sub_142670(a1);
      return 1;
    }
  }
  return 0;
}

