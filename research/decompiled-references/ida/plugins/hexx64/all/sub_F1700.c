__int64 __fastcall sub_F1700(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  int v5; // r14d
  const char *v6; // rdi
  int v7; // r15d
  unsigned int v8; // ebx
  char v10; // al
  unsigned __int64 v11; // rcx
  int v12; // edx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  const char *v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 24);
  v17 = __readfsqword(0x28u);
  v15 = nullptr;
  v16 = 0;
  v5 = sub_E8020(a1, (__int64 *)&v15, *(_QWORD *)(*a1 + 56), 80LL * a3 + v3, 0);
  if ( !v5 )
    goto LABEL_5;
  v6 = s1;
  if ( (_QWORD)v16 )
    v6 = v15;
  v7 = sub_D05C0(v6);
  if ( !v7 )
    goto LABEL_5;
  v10 = getinf_flag();
  v11 = *(_QWORD *)(a2 + 32);
  if ( v10 )
  {
    v12 = a3 + 1;
    v13 = a3 + 1;
    if ( v13 < v11 )
    {
      v14 = *(_QWORD *)(a2 + 24);
      while ( (unsigned int)(*(_DWORD *)(v14 + 80 * v13 + 56) - 3) > 1 )
      {
        v13 = ++v12;
        if ( v12 >= v11 )
          goto LABEL_15;
      }
      goto LABEL_5;
    }
  }
LABEL_15:
  if ( (_DWORD)v11 - a3 == 2 && v7 > 1 )
  {
LABEL_5:
    v8 = 0;
    goto LABEL_6;
  }
  if ( v5 == 1 )
    copy_tinfo_t();
  v8 = 1;
LABEL_6:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree((__int64)v15);
  }
  return v8;
}

