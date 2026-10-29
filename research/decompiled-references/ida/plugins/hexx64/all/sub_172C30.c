__int64 __fastcall sub_172C30(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rdx

  result = 0;
  if ( *(_BYTE *)a2 == 4 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( (unsigned int)(*(_DWORD *)v4 - 12) <= 1 )
    {
      v5 = *(_DWORD **)(a1 + 32);
      if ( *v5 == 2 )
      {
        if ( (_DWORD *)a2 != v5 + 12 )
          return result;
        goto LABEL_7;
      }
      if ( *v5 == 1 && (_DWORD *)a2 == v5 + 16 )
      {
LABEL_7:
        result = 0;
        if ( *(_BYTE *)(v4 + 48) == 4 )
          return (unsigned __int8)sub_125B90(
                                    *(unsigned __int8 **)(v4 + 56),
                                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL),
                                    *(unsigned int **)(a1 + 48),
                                    0,
                                    a3);
      }
    }
  }
  return result;
}

