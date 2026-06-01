void *__fastcall sub_1C6C0(__int64 a1)
{
  void *v1; // r11
  void *v2; // r10
  void *v3; // r9
  void *v4; // r8
  const __int16 *v5; // rsi
  void *v6; // rcx
  void *v7; // rdx
  void *result; // rax

  switch ( *(_DWORD *)(a1 + 184) )
  {
    case 0:
    case 1:
      v1 = &unk_54600;
      v2 = &unk_545C0;
      v3 = &unk_59520;
      goto LABEL_5;
    case 2:
    case 3:
      v1 = &unk_54600;
      v2 = &unk_545C0;
      v3 = &unk_59420;
LABEL_5:
      v4 = &unk_592A0;
      v5 = L"jbme";
      v6 = &unk_590A0;
      v7 = &unk_58EA0;
      result = &unk_58D60;
      break;
    case 4:
    case 5:
      v1 = &unk_54600;
      v2 = &unk_545C0;
      v3 = &unk_593A0;
      v4 = &unk_59220;
      v5 = L"jbme";
      v6 = &unk_590A0;
      v7 = &unk_58EA0;
      result = &unk_58D60;
      break;
    case 6:
    case 7:
      v1 = &unk_54600;
      v2 = &unk_545C0;
      v3 = &unk_594A0;
      v4 = &unk_592A0;
      v5 = L"jbme";
      v6 = &unk_59020;
      v7 = &unk_58DA0;
      result = &unk_58D60;
      break;
    case 8:
      v1 = &unk_54600;
      v2 = &unk_545C0;
      v3 = &unk_59320;
      v4 = &unk_591A0;
      v5 = L"jbme";
      v6 = &unk_58FA0;
      v7 = &unk_58E20;
      result = &unk_58D20;
      break;
    case 9:
    case 0xA:
      v1 = &unk_54580;
      v2 = &unk_54540;
      v3 = &unk_59520;
      v4 = &unk_59120;
      v5 = L"jbme";
      v6 = &unk_58F20;
      v7 = &unk_58EA0;
      result = &unk_58D60;
      break;
    default:
      if ( !under_debugger )
      {
        interr(239);
        sub_1C8A0();
      }
      BUG();
  }
  *(_QWORD *)(a1 + 192) = v1;
  *(_QWORD *)(a1 + 200) = v2;
  *(_QWORD *)(a1 + 208) = v3;
  *(_QWORD *)(a1 + 216) = v4;
  *(_QWORD *)(a1 + 224) = v5;
  *(_QWORD *)(a1 + 232) = v6;
  *(_QWORD *)(a1 + 240) = v7;
  *(_QWORD *)(a1 + 248) = result;
  return result;
}

