_QWORD *__fastcall sub_24AF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, double a6)
{
  bool v8; // zf
  _BOOL4 v9; // r15d
  int v10; // r15d
  int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  _QWORD *v17; // rbx
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  __int64 v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  v8 = *(_DWORD *)a3 == 8;
  v20 = 0;
  v9 = !v8;
  copy_tinfo_t();
  v10 = v9 + 1;
  v11 = *(_DWORD *)(a3 + 68);
  v21 = 0;
  if ( (*(_BYTE *)(a3 + 65) & 4) != 0 )
  {
    sub_32C150(v22, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v11);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else if ( sub_11CA80(v11)
         || !(unsigned __int8)sub_23F100(
                                &v21,
                                *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL),
                                *(_QWORD *)(a3 + 24),
                                a3 + 64,
                                *(_DWORD *)(a3 + 68),
                                0,
                                a6) )
  {
    sub_32C430(v22, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a3 + 68), v10);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  v12 = *(_QWORD *)(a1 + 328);
  if ( !(unsigned __int8)sub_246B40(a2, v12, &v21, a6) )
  {
    v15 = j__qalloc_or_throw(64, v12, v13, v14);
    *(_QWORD *)(v15 + 24) = a2;
    v16 = v15;
    *(_QWORD *)v15 = -1;
    *(_DWORD *)(v15 + 8) = 48;
    *(_QWORD *)(v15 + 12) = -1;
    *(_QWORD *)(v15 + 32) = 0;
    *(_QWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0;
    *(_DWORD *)(v15 + 56) = 0;
    copy_tinfo_t();
    a2 = v16;
  }
  v17 = sub_24AE20(a1, a3, a2, &v20, a5, a6);
  clear_tinfo_t();
  clear_tinfo_t();
  return v17;
}

