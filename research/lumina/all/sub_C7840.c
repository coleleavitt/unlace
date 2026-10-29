__int64 __fastcall sub_C7840(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // ebp
  _BOOL4 v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rdi
  int v11; // edi
  int v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v2 = (_DWORD *)a2;
  v4 = *(_QWORD *)(a1 + 16);
  v15 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v4 + 16);
  if ( !v5 )
  {
    v6 = 0;
    v7 = 1;
    if ( *(_BYTE *)(v4 + 32) > 1u )
      goto LABEL_5;
    goto LABEL_7;
  }
  xmmword_241500(v5);
  v4 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  v7 = 1;
  v8 = v4;
  if ( *(_BYTE *)(v4 + 32) <= 1u )
  {
LABEL_7:
    if ( *(_BYTE *)(v4 + 33) )
    {
      v8 = v4;
      v7 = 0;
      v6 = 0;
    }
    else
    {
      v14 = 1;
      v12 = 1;
      v11 = *(_DWORD *)(a1 + 24);
      a2 = 5;
      v13 = dword_241470 + 1;
      v6 = off_241210(v11, 5, &v12);
      if ( v6 )
      {
        v7 = 0;
        v6 = 3594;
        *(_DWORD *)(a1 + 32) = *__errno_location();
      }
      else
      {
        v7 = (_WORD)v12 != 2;
      }
      v8 = *(_QWORD *)(a1 + 16);
    }
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( v9 )
    xmmword_241510(v9, a2, v4);
LABEL_5:
  *v2 = v7;
  return v6;
}
