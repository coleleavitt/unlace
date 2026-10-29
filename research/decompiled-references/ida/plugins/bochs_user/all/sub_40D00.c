__int64 __fastcall sub_40D00(__int64 a1, unsigned __int16 a2, int a3, _QWORD *a4, int a5, char a6, unsigned __int8 a7)
{
  __int64 v8; // rdi
  __int64 result; // rax
  unsigned int v10; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v8 = *(_QWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  v10 = 0;
  if ( a4 && a7 )
  {
    v10 = *a4;
    result = sub_40BB0(v8, a2, a3, &v10, a5, a6, 1u);
LABEL_4:
    *a4 = v10;
    return result;
  }
  result = sub_40BB0(v8, a2, a3, &v10, a5, a6, a7);
  if ( a4 )
    goto LABEL_4;
  return result;
}

