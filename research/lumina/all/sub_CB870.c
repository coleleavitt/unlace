__int64 __fastcall sub_CB870(_QWORD *a1, int *a2, _QWORD *a3)
{
  int v3; // ecx
  __int64 result; // rax
  _QWORD *v5; // rcx

  if ( a2 )
  {
    v3 = *a2;
    if ( *a2 )
    {
      result = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 1) = a3;
      *a2 = v3 + 1;
      if ( result )
      {
        *a3 = result;
        a3[1] = *(_QWORD *)(result + 8);
        v5 = *(_QWORD **)(result + 8);
        if ( v5 )
          *v5 = a3;
        else
          *a1 = a3;
        *(_QWORD *)(result + 8) = a3;
        return result;
      }
    }
    else
    {
      *a2 = 1;
      *((_QWORD *)a2 + 1) = a3;
    }
  }
  *a3 = *a1;
  result = *a1;
  if ( *a1 )
    *(_QWORD *)(result + 8) = a3;
  a3[1] = 0;
  *a1 = a3;
  return result;
}
