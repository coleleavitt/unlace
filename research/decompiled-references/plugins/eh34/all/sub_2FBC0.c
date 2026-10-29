__int64 __fastcall sub_2FBC0(_BYTE *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // eax
  char v6; // dl
  int v7; // ebp
  __int16 v9; // [rsp+6h] [rbp-52h] BYREF
  __int16 v10; // [rsp+8h] [rbp-50h] BYREF
  __int16 v11; // [rsp+Ah] [rbp-4Eh] BYREF
  __int16 v12; // [rsp+Ch] [rbp-4Ch] BYREF
  _BYTE v13[2]; // [rsp+Eh] [rbp-4Ah] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)a1;
  v16 = __readfsqword(0x28u);
  v9 = 17990;
  v5 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int16 *))(v3 + 8))(a1, a3, &v9);
  v6 = HIBYTE(v9);
  v7 = v5;
  if ( !(_BYTE)v5 )
  {
    v6 = a1[10];
    HIBYTE(v9) = v6;
  }
  v14[0] = a1;
  v10 = 0;
  v14[1] = a2;
  v11 = v6 & 3;
  v12 = (v6 & 4) != 0;
  v15 = 0;
  if ( (int)sub_2F7B0(
              (__int64)"C++ exceptions per-function settings\n"
                       "\n"
                       "%/%*<#If checked, boxes below are ignored#Use ~g~lobal settings:C>8>\n"
                       "<#Don't show any C++ exception constructs#This function's output mode##~D~isabled:R>\n"
                       "<#Don't show C++ exception constructs via helper calls#~S~tructured only:R>\n"
                       "<#Show everything#Structured and ~u~nstructured:R>5>\n"
                       "<#If unchecked, only show try/catch#Show ~w~ind states:C>6>\n"
                       "<~E~dit global settings:B10::::>\n"
                       "\n"
                       "\n",
              sub_2F7A0,
              v14,
              &v10,
              &v11,
              &v12,
              sub_2FB80) <= 0 )
    return (unsigned __int8)v15;
  if ( v10 == 1 )
  {
    if ( (_BYTE)v7 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 40LL))(a1, a3);
    return v7 | (unsigned int)(unsigned __int8)v15;
  }
  else
  {
    v13[0] = 70;
    v13[1] = v11 | (4 * (v12 != 0));
    (*(void (__fastcall **)(_BYTE *, __int64, _BYTE *))(*(_QWORD *)a1 + 16LL))(a1, a3, v13);
    return 1;
  }
}
