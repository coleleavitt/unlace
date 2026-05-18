_QWORD *__fastcall sub_C2AB0(__int64 a1, unsigned __int8 *a2, unsigned int *a3)
{
  __int64 v3; // r8
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned __int8 *i; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int *v10; // r8
  _QWORD *result; // rax
  int v12; // ecx
  int v13; // r10d
  _BYTE *v14; // r8
  unsigned __int8 *j; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v5 = *a2;
    v6 = 0;
    for ( i = a2 + 1; (_BYTE)v5; v6 = -1640531535 * v8 )
    {
      ++i;
      v8 = byte_1BF000[v5] + v6;
      v5 = *(i - 1);
    }
    v9 = v6 % *(_DWORD *)a1;
    v10 = (int *)(16LL * v9 + v3);
    result = *((_QWORD **)v10 + 1);
    v12 = *v10;
  }
  else
  {
    result = *(_QWORD **)(a1 + 8);
    v12 = *(_DWORD *)(a1 + 4);
    v9 = 0;
  }
  if ( a3 )
    *a3 = v9;
  v13 = v12 - 1;
  if ( !v12 )
    return &unk_242160;
  do
  {
    v14 = (_BYTE *)result[3];
    for ( j = a2; ; ++j )
    {
      v16 = (unsigned __int8)*v14;
      v17 = *j;
      if ( (_DWORD)v16 != (_DWORD)v17 )
        break;
      if ( !*v14 )
        return result;
LABEL_10:
      ++v14;
    }
    if ( byte_1BF000[v16] == byte_1BF000[v17] )
      goto LABEL_10;
    --v13;
    result = (_QWORD *)*result;
  }
  while ( v13 != -1 );
  return &unk_242160;
}
