_QWORD *__fastcall sub_2466D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  bool v7; // zf
  _BOOL4 v8; // r15d
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD *v13; // rbx
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v18[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v19 = __readfsqword(0x28u);
  v7 = *(_DWORD *)a3 == 8;
  v16 = 0;
  v8 = !v7;
  copy_tinfo_t();
  v9 = v8 + 1;
  v10 = *(unsigned int *)(a3 + 68);
  v17 = 0;
  if ( (*(_BYTE *)(a3 + 65) & 4) != 0 )
  {
    sub_327220(v18, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v10);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else if ( sub_118880(v10)
         || !(unsigned __int8)sub_23A880(
                                &v17,
                                *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL),
                                *(_QWORD *)(a3 + 24),
                                a3 + 64,
                                *(_DWORD *)(a3 + 68),
                                0) )
  {
    sub_327500(v18, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a3 + 68), v9);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( !(unsigned __int8)sub_2422C0(a2, *(_QWORD *)(a1 + 328), &v17) )
  {
    v11 = j__qalloc_or_throw();
    *(_QWORD *)(v11 + 24) = a2;
    v12 = v11;
    *(_QWORD *)v11 = -1;
    *(_DWORD *)(v11 + 8) = 48;
    *(_QWORD *)(v11 + 12) = -1;
    *(_QWORD *)(v11 + 32) = 0;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 56) = 0;
    copy_tinfo_t();
    v5 = v12;
  }
  v13 = sub_2465A0(a1, a3, v5, &v16, a5);
  clear_tinfo_t();
  clear_tinfo_t();
  return v13;
}

