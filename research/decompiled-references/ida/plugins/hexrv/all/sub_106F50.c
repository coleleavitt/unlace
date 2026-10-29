unsigned __int64 __fastcall sub_106F50(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  char v5; // dl
  __m128i *v6; // rdi
  const __m128i *v8; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  char v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 1 )
    goto LABEL_4;
  if ( *(_BYTE *)a2 != 5
    || !(unsigned __int8)sub_FE200(**(_QWORD ***)(a2 + 8), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), 1u) )
  {
    sub_FD8D0();
  }
  v5 = *(_BYTE *)a2;
  v10 = 0;
  if ( v5 == 1 )
  {
LABEL_4:
    v4 = *(int *)(a2 + 8);
    v5 = 1;
  }
  else
  {
    v4 = -1;
    if ( v5 != 5 )
      goto LABEL_6;
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  }
  v10 = v5;
LABEL_6:
  v6 = *(__m128i **)(a1 + 48);
  v8 = (const __m128i *)&v9;
  v9 = v4 + a3;
  sub_106C20(v6, (__int64)&v9, &v8);
  return v11 - __readfsqword(0x28u);
}

