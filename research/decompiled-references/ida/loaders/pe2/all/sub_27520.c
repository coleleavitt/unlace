__int64 __fastcall sub_27520(__int64 a1, int a2, char *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rdi
  __int64 result; // rax
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rdi
  char *v14; // rcx
  unsigned int v15; // [rsp+Ch] [rbp-5Ch] BYREF
  char *v16; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a3 )
  {
    *(_WORD *)a3 = 0;
    if ( !a5 )
      goto LABEL_4;
  }
  else if ( !a5 )
  {
    return 0;
  }
  *a5 = 0;
LABEL_4:
  v9 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( *(_BYTE *)(v9 + 1112) )
  {
    if ( !(unsigned __int8)sub_239A0(v9, &v15, v9 + 1112, (a2 & 0xFFFFFFu) - 1, 0) )
      return 0;
    v11 = v15;
    v16 = nullptr;
    v17 = 0;
    v12 = qvector_reserve();
    v13 = *(_QWORD *)(a1 + 8);
    v16 = (char *)v12;
    sub_24180(v13, v11, (__int64 *)&v16);
    v14 = (char *)s1;
    if ( (_QWORD)v17 )
      v14 = v16;
    sub_264E0(a3, a4, a5, v14);
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

