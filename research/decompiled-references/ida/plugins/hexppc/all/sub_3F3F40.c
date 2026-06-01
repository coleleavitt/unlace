__int64 __fastcall sub_3F3F40(__int64 a1, int a2, unsigned int a3, double a4)
{
  int v4; // r8d
  unsigned int v5; // r9d
  __int64 v6; // r12
  char v7; // al
  unsigned int v8; // ebp
  signed int v9; // r13d
  __int64 v10; // rax
  int v11; // r15d
  __int64 v12; // r14
  int dtype_size; // eax
  __int64 v14; // r8
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // si
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // [rsp+3h] [rbp-45h] BYREF
  int v23; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v24 = __readfsqword(0x28u);
  v5 = a3;
  v23 = 0;
  if ( a2 == 1 && (unsigned __int8)sub_3E5AC0(&v23, &v22, *(unsigned __int16 *)(a1 + 48)) )
  {
    v16 = v23;
    if ( v23 != -1 )
    {
      v17 = *(_QWORD *)(a1 + 832);
      v18 = *(_QWORD *)(v17 + 4464);
      if ( v18 )
      {
        BYTE1(v16) = BYTE1(v23) | 0x10;
        v8 = *(_DWORD *)(*(_QWORD *)(v17 + 4456) + 4 * v18 - 4);
        v19 = v22;
        *(_QWORD *)(v17 + 4464) = v18 - 1;
        if ( !(unsigned __int8)sub_3EC4B0(a1, v19, v16, v8, 1u, a4) )
          return (unsigned int)-1;
        return v8;
      }
LABEL_17:
      sub_3E6800(a4);
    }
    return (unsigned int)-1;
  }
  v6 = v4;
  v7 = *(_BYTE *)(a1 + 40LL * v4 + 65);
  if ( (unsigned __int8)(v7 - 2) <= 2u || (unsigned __int8)(v7 - 6) <= 1u )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, (unsigned int)v4, v5);
    if ( v8 != -1 )
    {
      if ( *(_BYTE *)(a1 + 40 * v6 + 69) == 9 )
        return v8;
      v9 = v8;
      if ( !sub_60EF0((_QWORD *)(*(_QWORD *)(a1 + 832) + 104LL), v8) )
      {
        v20 = *(_QWORD *)(a1 + 832);
        v21 = *(_QWORD *)(v20 + 4464);
        if ( !v21 )
          goto LABEL_17;
        v9 = *(_DWORD *)(*(_QWORD *)(v20 + 4456) + 4 * v21 - 4);
        *(_QWORD *)(v20 + 4464) = v21 - 1;
      }
      v10 = *(_QWORD *)(a1 + 832);
      v11 = *(_DWORD *)(v10 + 80);
      v12 = *(int *)(v10 + 64);
      dtype_size = get_dtype_size();
      v14 = (int)v8;
      v8 = v9;
      sub_1D2710(a1, 2u, dtype_size, v12, v14, v9, v11);
      return v8;
    }
    return (unsigned int)-1;
  }
  return sub_3F3ED0(a1, v4, a4);
}

