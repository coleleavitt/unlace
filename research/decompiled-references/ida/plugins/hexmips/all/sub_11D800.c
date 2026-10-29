__int64 __fastcall sub_11D800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r12
  _QWORD *v11; // rax
  int v12; // ebp
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
    return 1;
  v6 = *(unsigned int *)(a1 + 4);
  v8 = *(_QWORD *)(a1 + 8);
  v13 = -1;
  v14 = 0;
  result = sub_1BED50(v8, &v13, v6, a4, a5);
  if ( (_BYTE)result )
  {
    if ( (_BYTE)v14 == 1 )
    {
      v12 = v13;
      sub_118BA0(a1);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v12;
    }
    else
    {
      if ( (_BYTE)v14 != 5 )
        return 1;
      v9 = v13;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      sub_118BA0(a1);
      *(_BYTE *)a1 = 5;
      v11 = (_QWORD *)j__qalloc_or_throw();
      *v11 = v10;
      v11[1] = v9;
      *(_QWORD *)(a1 + 8) = v11;
    }
    *(_DWORD *)(a1 + 4) = HIDWORD(v14);
    return 1;
  }
  return result;
}

