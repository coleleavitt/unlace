__int64 __fastcall sub_4D90(_QWORD *a1, unsigned int a2, __int64 *a3, bool a4, char a5)
{
  unsigned int v5; // ebp
  bool v6; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v13; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v6 = a4;
  v14 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1[5] + 368LL);
  if ( a5 != 1 && a4 )
  {
    v6 = v8 != 4;
    goto LABEL_4;
  }
  if ( v8 == 4 || a4 )
  {
LABEL_4:
    v13 = 0;
    v5 = sub_4D20(a1, a2, &v13);
    if ( (_BYTE)v5 )
    {
      v9 = v13;
      if ( v6 )
      {
        if ( v13 )
          v9 += getinf();
        else
          v9 = 0;
      }
      if ( a3 )
        *a3 = *(_QWORD *)(*(_QWORD *)(a1[5] + 24LL) + 16LL) & v9;
      return v5;
    }
    goto LABEL_19;
  }
  v10 = a1[1] - *a1;
  if ( a2 >= v10 || v10 - a2 <= 7 )
  {
LABEL_19:
    if ( a3 )
      *a3 = -1;
    return 0;
  }
  v11 = *(_QWORD *)(a1[2] + a2);
  if ( (unsigned __int8)getinf_flag() )
    v11 = swap64();
  if ( a3 )
    *a3 = v11;
  LOBYTE(v5) = v11 != -1;
  return v5;
}
