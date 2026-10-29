__int64 __fastcall sub_121AD0(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v5; // esi
  bool v6; // zf
  int *v9; // rdi
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+10h] [rbp-48h] BYREF
  int v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 < a3 )
    return 0;
  v6 = *(_BYTE *)a1 == 15;
  v12[0] = 0;
  v12[1] = 0;
  if ( v6 )
  {
    v9 = *(int **)(a1 + 8);
    if ( !v9 )
      goto LABEL_6;
  }
  else
  {
    if ( !(unsigned __int8)sub_1C5030((char *)a1, (__int64)v12) )
      goto LABEL_6;
    v5 = *(_DWORD *)(a1 + 4);
    v9 = (int *)v12;
  }
  v10 = sub_1C3DC0(v9, v5, a2, a3, &v13);
  if ( (_BYTE)v10 )
  {
    if ( a4 )
      *a4 = v14;
    goto LABEL_7;
  }
LABEL_6:
  v10 = 0;
LABEL_7:
  cleanup_argloc();
  return v10;
}

