unsigned __int64 __fastcall sub_102750(_QWORD *a1, char a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx

  result = a1[3];
  if ( result < a1[2] )
    goto LABEL_2;
  result = sub_102660((__int64)a1, 1);
  if ( !(_DWORD)result )
  {
    result = a1[3];
LABEL_2:
    v3 = a1[1];
    a1[3] = result + 1;
    *(_BYTE *)(v3 + result) = a2;
  }
  return result;
}
