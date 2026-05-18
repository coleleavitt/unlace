__int64 __fastcall sub_117280(__int64 a1)
{
  char *v1; // rbp
  char v2; // al
  bool v3; // zf
  __int64 result; // rax

  v1 = *(char **)(a1 + 40);
  v2 = *v1;
  if ( (unsigned __int8)*v1 > 2u )
  {
    result = sub_1171C0(*(_QWORD *)(a1 + 40));
    if ( (_DWORD)result )
    {
      *(_DWORD *)(a1 + 24) = 0;
      goto LABEL_6;
    }
    v2 = *v1;
  }
  v3 = v2 == 0;
  *(_DWORD *)(a1 + 24) = 0;
  result = 0;
  if ( !v3 )
LABEL_6:
    *(_BYTE *)(a1 + 2) = 1;
  return result;
}
