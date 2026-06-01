__int64 __fastcall sub_121A00(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // ebp
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 15 )
    return 1;
  v2 = *(_DWORD *)(a1 + 4);
  v4 = *(_QWORD *)(a1 + 8);
  v11 = -1;
  v12 = 0;
  result = sub_1C3110(v4, (__int64)&v11, v2);
  if ( (_BYTE)result )
  {
    if ( (_BYTE)v12 == 1 )
    {
      v10 = v11;
      sub_11CDA0(a1);
      *(_BYTE *)a1 = 1;
      *(_DWORD *)(a1 + 8) = v10;
    }
    else
    {
      if ( (_BYTE)v12 != 5 )
        return 1;
      v5 = v11;
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      sub_11CDA0(a1);
      *(_BYTE *)a1 = 5;
      v9 = (_QWORD *)j__qalloc_or_throw(16, (__int64)&v11, v7, v8);
      *v9 = v6;
      v9[1] = v5;
      *(_QWORD *)(a1 + 8) = v9;
    }
    *(_DWORD *)(a1 + 4) = HIDWORD(v12);
    return 1;
  }
  return result;
}

