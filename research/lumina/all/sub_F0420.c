char *__fastcall sub_F0420(__int64 a1, __int64 *a2, unsigned int a3)
{
  char *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  result = *(char **)(*(_QWORD *)(a1 + 64) + 8LL * ((unsigned int)a2 % *(_DWORD *)(a1 + 60)));
  if ( result )
  {
    while ( (_DWORD)a2 != *((_DWORD *)result + 4) )
    {
      result = *((char **)result + 3);
      if ( !result )
        goto LABEL_7;
    }
    v4 = *((_QWORD *)result + 5);
    if ( v4 )
    {
      *(_QWORD *)(*((_QWORD *)result + 6) + 40LL) = v4;
      *(_QWORD *)(*((_QWORD *)result + 5) + 48LL) = *((_QWORD *)result + 6);
      v5 = *((_QWORD *)result + 4);
      *((_QWORD *)result + 5) = 0;
      --*(_DWORD *)(v5 + 52);
    }
  }
  else
  {
LABEL_7:
    if ( a3 )
      return sub_F00A0(a1, a2, a3, a3);
    else
      return nullptr;
  }
  return result;
}
