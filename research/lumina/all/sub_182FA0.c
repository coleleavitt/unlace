unsigned __int64 __fastcall sub_182FA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, __int64 *); // rax
  int v4; // eax
  __int64 v6; // rax
  unsigned int (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 560);
  v11 = __readfsqword(0x28u);
  switch ( *(_WORD *)(v2 + 24) )
  {
    case 2:
      v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(a1 + 152);
      if ( v3 )
        goto LABEL_3;
      v7 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 160);
      if ( v7 )
        goto LABEL_15;
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 8) = 0;
      return sub_182E30(a1);
    case 3:
    case 5:
      v6 = *(_QWORD *)(v2 + 32);
      *(_BYTE *)a2 = *(_BYTE *)(v2 + 40);
      *(_QWORD *)(a2 + 8) = v6;
      return sub_182E30(a1);
    case 8:
      v8 = *(_QWORD *)(v2 + 48);
      *(_BYTE *)a2 = *(_BYTE *)(v2 + 40);
      *(_QWORD *)(a2 + 8) = v8;
      return sub_182E30(a1);
    case 0x28:
      return sub_182E90(a1, a2);
    default:
      v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(a1 + 152);
      if ( !v3 )
      {
        v7 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 160);
        if ( v7 )
        {
LABEL_15:
          *(_BYTE *)(a1 + 572) = 0;
          *(_DWORD *)(a1 + 576) = 0;
          if ( !v7(a1, a1 + 572) )
            goto LABEL_5;
        }
LABEL_16:
        sub_17E010(a1);
      }
LABEL_3:
      v4 = v3(a1, *(_QWORD *)(a1 + 208), v2, &v10);
      if ( v4 )
      {
        if ( v4 == 34 )
        {
LABEL_5:
          *(_BYTE *)(a1 + 568) = 1;
          *(_BYTE *)a2 = 1;
          *(_QWORD *)(a2 + 8) = 0;
          return v11 - __readfsqword(0x28u);
        }
        goto LABEL_16;
      }
      v9 = v10;
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = v9;
      return sub_182E30(a1);
  }
}
