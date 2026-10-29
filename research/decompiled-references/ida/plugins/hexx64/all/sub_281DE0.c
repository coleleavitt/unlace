__int64 __fastcall sub_281DE0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int tinfo_size; // r14d
  int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  v15[1] = __readfsqword(0x28u);
  sub_2436E0(&v14, a2, a1, v5 + 48, (_QWORD *)(v4 + 48), (_BYTE *)(*(_QWORD *)(a1 + 40) + 48LL), a4, 0);
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 22) <= 9 || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    v12 = sub_255000(*(_DWORD *)(a1 + 8));
    v13 = *(_QWORD *)(a2 + 112);
    if ( !v12 )
      v12 = 1;
    sub_32C430(v15, v13, tinfo_size, v12);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  sub_244E70(a3, (__int64)&v14, v7, v8);
  v9 = 1;
LABEL_4:
  clear_tinfo_t();
  return v9;
}

