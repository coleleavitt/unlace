__int64 __fastcall sub_366FD0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned int v4; // r15d
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // r13d
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v16; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v2 = *(int *)(a1 + 480);
  if ( (_DWORD)v2 == -1 )
    return 1;
  v3 = *(_QWORD *)(a1 + 432) + 104 * v2;
  v4 = sub_1C1A60(a1, v3 + 80, (_DWORD *)v3, a2);
  if ( (_BYTE)v4 )
    return 1;
  v6 = a2;
  if ( a2 <= 0x10 )
    v6 = getinf();
  if ( v6 == 176 )
  {
    if ( (unsigned __int64)getinf() > 0x397
      || (unsigned __int8)getinf_flag()
      && (netnode_check(), v9 = netnode_altval(), v9 > 0x74)
      && ((v10 = *(_DWORD *)(get_ph() + 4)) == 0
       || (v11 = (unsigned int)(v10 - 13), (unsigned int)v11 <= 0x3B)
       && (v12 = 0x800000000000005LL, _bittest64(&v12, v11))
       && v9 != 117) )
    {
      v7 = *(_DWORD *)(v3 + 88);
      v15[0] = 0;
      if ( v7 == 1 )
      {
        if ( (unsigned int)sub_1BE780((_DWORD *)v3) == -1 )
        {
          v7 = *(_DWORD *)(v3 + 88);
        }
        else
        {
          v15[1] = 17;
          v17 = 0x200000000LL;
          v16 = 0;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          if ( !sub_1EA530(v3, *(_QWORD *)(a1 + 1504), v15, 1) )
          {
            v4 = 0;
            goto LABEL_29;
          }
          v7 = *(_DWORD *)(v3 + 88);
        }
      }
      v19 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      sub_1BE430(v3, (__int64)&v16, v7, 0, v3 + 80);
      copy_tinfo_t();
      if ( !(unsigned __int8)sub_218B00((_QWORD *)a1, v15, 0, &v16)
        || (v8 = sub_1C1A60(a1, (__int64)v15, (_DWORD *)v3, a2), !(_BYTE)v8) )
      {
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree();
        }
        qfree();
        clear_tinfo_t();
        return v4;
      }
      v13 = v15[0];
      v14 = v18;
      v15[0] = *(_QWORD *)(v3 + 80);
      *(_QWORD *)(v3 + 80) = v13;
      if ( v14 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      v4 = v8;
      qfree();
LABEL_29:
      clear_tinfo_t();
    }
  }
  return v4;
}

