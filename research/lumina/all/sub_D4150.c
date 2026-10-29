__int64 __fastcall sub_D4150(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // bl
  char *v7; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  char *v10; // rdi
  char *v11; // [rsp+8h] [rbp-50h] BYREF
  char v12[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 64);
  v13 = __readfsqword(0x28u);
  v4 = *(_QWORD *)a1;
  if ( v3 )
  {
    v10 = (char *)(v4 + v3);
    goto LABEL_14;
  }
  v5 = v4 % *(int *)(a1 + 56);
  if ( !v5 )
  {
    v6 = 0;
    goto LABEL_8;
  }
  v6 = 0;
  if ( *(_DWORD *)(a1 + 56) - (int)v5 > 8 )
  {
    v10 = (char *)(*(_QWORD *)(a1 + 48) + v5);
LABEL_14:
    *(_QWORD *)a1 += (unsigned __int8)sub_C2860(v10, a2);
    return 0;
  }
  while ( 1 )
  {
LABEL_8:
    if ( v3 )
    {
      v7 = (char *)(*(_QWORD *)a1 + v3);
      v8 = *(_QWORD *)a1 + 1LL;
      v11 = v7;
      *(_QWORD *)a1 = v8;
    }
    else
    {
      result = sub_D3FB0(a1, 1, &v11);
      if ( (_DWORD)result )
        return result;
      v7 = v11;
    }
    v12[v6 & 0xF] = *v7;
    if ( *v7 >= 0 )
      break;
    v3 = *(_QWORD *)(a1 + 64);
    ++v6;
  }
  sub_C2860(v12, a2);
  return 0;
}
