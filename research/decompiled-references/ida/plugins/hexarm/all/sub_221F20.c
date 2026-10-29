__int64 __fastcall sub_221F20(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned int tinfo_size; // r15d
  __int64 *v11; // rdi
  __int64 (*v12)(); // rax
  __int64 v13; // rcx
  unsigned __int8 *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rsi
  void (__fastcall *v18)(int *, __int64, int *, __int64 *); // rax
  int v19; // edx
  int v20; // esi
  int v21; // eax
  unsigned int v22; // eax
  int v23; // [rsp+4h] [rbp-8Ch]
  int v24; // [rsp+14h] [rbp-7Ch] BYREF
  int v25; // [rsp+18h] [rbp-78h] BYREF
  int v26; // [rsp+20h] [rbp-70h]
  __int64 v27[2]; // [rsp+28h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-58h] BYREF
  __int128 v29; // [rsp+40h] [rbp-50h]
  unsigned __int64 v30; // [rsp+50h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  if ( !a3 )
  {
    v15 = (unsigned __int8 *)&unk_426352;
    while ( 1 )
    {
      v16 = *v15;
      if ( (_BYTE)v16 != 41 && (_BYTE)v16 != 22 )
        goto LABEL_19;
      v22 = *(_DWORD *)(a2 + 72);
      if ( v22 <= 0x10 )
        v22 = getinf();
      if ( v22 == 176 )
        goto LABEL_16;
      if ( v22 == 256 )
      {
        if ( &unk_426357 == (_UNKNOWN *)++v15 )
        {
LABEL_30:
          sub_F8450(a2, (__int64 *)a1);
          return a1;
        }
      }
      else
      {
LABEL_19:
        v17 = *(_QWORD *)(a2 + 1504);
        v18 = *(void (__fastcall **)(int *, __int64, int *, __int64 *))(*(_QWORD *)v17 + 104LL);
        v27[0] = v16;
        v18(&v25, v17, &v24, v27);
        clear_tinfo_t();
        if ( v25 == 3 )
        {
          v19 = v24;
          v20 = v26;
          if ( v24 == 8
            || (v23 = v26,
                v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 1504) + 32LL))(*(_QWORD *)(a2 + 1504)),
                v19 = v24,
                v20 = v23,
                v24 <= v21) )
          {
            v27[0] = 0;
            v27[1] = 0;
            sub_63880(v27, v20, v19);
            v28 = 0;
            v29 = 0;
            sub_63C80((__int64 *)a1, v27);
            sub_317070(a1 + 16, &v28);
            if ( v28 )
            {
              *(_QWORD *)&v29 = 0;
              qfree();
            }
            qfree();
          }
        }
        else if ( v25 )
        {
          sub_1C2BF0((__int64)&v25, a1, v24, 0, 0);
        }
        cleanup_argloc();
LABEL_16:
        if ( &unk_426357 == (_UNKNOWN *)++v15 )
          goto LABEL_30;
      }
    }
  }
  tinfo_size = get_tinfo_size();
  if ( tinfo_size != -1 )
  {
    v11 = *(__int64 **)(a2 + 1504);
    if ( *(_DWORD *)(a3 + 40) )
    {
      v12 = *(__int64 (**)())(*v11 + 96);
      if ( v12 == sub_21BFA0
        || !((unsigned __int8 (__fastcall *)(__int64 *, __int64, __int64, __int64, unsigned __int64))v12)(
              v11,
              a1,
              a3,
              a2,
              a4) )
      {
        if ( a4 == -1 )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1496) + 24LL) + 16LL)
              & (*(_QWORD *)(a2 + 1440) + *(_QWORD *)(a2 + 136) + *(int *)(a2 + 116));
        }
        else
        {
          v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 1496) + 24LL) + 16LL)
              & (*(_QWORD *)(a2 + 1440) + sub_1CF5F0(a2, a4));
          if ( a5 )
            v13 += *(int *)(a2 + 116);
        }
        sub_1C59F0((__int64)v27, a3 + 40, tinfo_size, v13);
        sub_1C2BF0((__int64)v27, a1, tinfo_size, 0, 0);
        if ( a4 != -1 )
          sub_64670((__int64 *)a1, tinfo_size, *(_DWORD *)(*(_QWORD *)(a2 + 1504) + 80LL));
        cleanup_argloc();
      }
    }
    else
    {
      sub_21C430(v11, (_QWORD *)a1, a3 + 32);
    }
  }
  return a1;
}

