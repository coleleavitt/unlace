__int64 __fastcall sub_40D90(__int64 a1, unsigned __int16 a2, int a3, _QWORD *a4, char a5)
{
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 8);
  v9 = __readfsqword(0x28u);
  if ( a4 && a5 )
  {
    v8 = *a4;
    result = sub_40AD0(v5, a2, a3, &v8, 1);
LABEL_4:
    *a4 = v8;
    return result;
  }
  result = sub_40AD0(v5, a2, a3, &v8, a5);
  if ( a4 )
    goto LABEL_4;
  return result;
}

