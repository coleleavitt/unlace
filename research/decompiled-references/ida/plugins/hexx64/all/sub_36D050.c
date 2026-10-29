__int64 __fastcall sub_36D050(__int64 a1, unsigned int a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned int v6; // r15d
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int128 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v4 = *(int *)(a1 + 480);
  if ( (_DWORD)v4 == -1 )
    return 1;
  v5 = *(_QWORD *)(a1 + 432) + 104 * v4;
  v6 = sub_1C67E0(a1, v5 + 80, (_DWORD *)v5, a2, a3);
  if ( (_BYTE)v6 )
    return 1;
  v8 = a2;
  if ( a2 <= 0x10 )
    v8 = getinf();
  if ( v8 == 176 )
  {
    if ( (unsigned __int64)getinf() > 0x397
      || (unsigned __int8)getinf_flag()
      && (netnode_check(), v11 = netnode_altval(), v11 > 0x74)
      && ((v12 = *(_DWORD *)(get_ph() + 4)) == 0
       || (v13 = (unsigned int)(v12 - 13), (unsigned int)v13 <= 0x3B)
       && (v14 = 0x800000000000005LL, _bittest64(&v14, v13))
       && v11 != 117) )
    {
      v9 = *(_DWORD *)(v5 + 88);
      v17[0] = 0;
      if ( v9 == 1 )
      {
        if ( (unsigned int)sub_1C3500((_DWORD *)v5, a3) == -1 )
        {
          v9 = *(_DWORD *)(v5 + 88);
        }
        else
        {
          v17[1] = 17;
          v19 = 0x200000000LL;
          v18 = 0;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          if ( !sub_1EF8F0(v5, *(_QWORD *)(a1 + 1504), v17, 1, a3) )
          {
            v6 = 0;
            goto LABEL_29;
          }
          v9 = *(_DWORD *)(v5 + 88);
        }
      }
      v21 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      sub_1C31B0(v5, (__int64)&v18, v9, 0, v5 + 80, 0.0, a4);
      copy_tinfo_t();
      if ( !(unsigned __int8)sub_21DEC0((_QWORD *)a1, v17, 0, &v18, 0.0)
        || (v10 = sub_1C67E0(a1, (__int64)v17, (_DWORD *)v5, a2, 0.0), !(_BYTE)v10) )
      {
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v20);
        }
        qfree(v18);
        clear_tinfo_t();
        return v6;
      }
      v15 = v17[0];
      v16 = v20;
      v17[0] = *(_QWORD *)(v5 + 80);
      *(_QWORD *)(v5 + 80) = v15;
      if ( v16 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v16);
      }
      v6 = v10;
      qfree(v18);
LABEL_29:
      clear_tinfo_t();
    }
  }
  return v6;
}

