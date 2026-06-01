__int64 __fastcall sub_386410(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int *v6; // rax
  int *v7; // r8
  int v8; // [rsp+0h] [rbp-48h] BYREF
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned __int64 v11; // [rsp+38h] [rbp-10h]

  result = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v11 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(v5 + 136) )
    return result;
  v6 = &v9;
  v7 = &v8;
  v8 = 0;
  if ( (a3 & 1) == 0 )
    v6 = nullptr;
  v9 = 0;
  if ( (a3 & 0x1E) == 0 )
    v7 = nullptr;
  sub_385510(
    v5,
    *(_BYTE **)(*(_QWORD *)(v5 + 128) + 32 * a2),
    0,
    (int)a2 >= *(_DWORD *)(v5 + 152),
    (__int64)v7,
    0,
    (__int64)v6);
  if ( v8 == 3 )
  {
    LODWORD(result) = a3 & 0xFFFFFFF9;
    goto LABEL_9;
  }
  if ( v8 == 4 )
  {
    LODWORD(result) = a3 & 0xFFFFFFEF;
    goto LABEL_9;
  }
  result = a3 & 0xFFFFFFE9;
  if ( v8 != 2 )
  {
LABEL_9:
    result = (unsigned int)result & 0xFFFFFFF7;
    if ( v9 != 4 )
      return (unsigned int)result & 0xFFFFFFFE;
    goto LABEL_15;
  }
  if ( v9 != 4 )
    return (unsigned int)result & 0xFFFFFFFE;
LABEL_15:
  if ( v10 == -1 )
    return (unsigned int)result & 0xFFFFFFFE;
  return result;
}

